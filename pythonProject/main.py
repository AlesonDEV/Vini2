import telebot
from telebot import types
import config
from users_table import save_user_data, check_volunteer_status
from project_table import save_project_data

bot = telebot.TeleBot(config.TOKEN, parse_mode=None)
user_data = {}
project_data = {}

@bot.message_handler(commands=["start"])
def start(message):
    markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
    bot.send_message(message.chat.id,
                     "Привіт, дорогий {0.first_name}! Я твій помічник Вінні-Пух. Я допоможу тобі знайти людину, яка зможе тобі допомогти."
                     " Також я сам стану помічником для наших чудових волонтерів.\n"
                     "Щоб побачити, як я можу допомогти тобі, використовуй команду: /help\n"
                     "<b>Для початку використання бота тобі необхідно пройти реєстрацію:</b>\n"
                     "Виклич повідомлення /registration\n".format(
        message.from_user, bot.get_me()), parse_mode='html', reply_markup=markup)

@bot.message_handler(commands=["help"])
def help(message):
    markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
    bot.send_message(message.chat.id,
                     "Якщо ти користувач, який хоче повідомити нас про свою проблему, виклич команду:\n"
                     "/register_problem\n"
                     "Для волонтерів всі дані будуть надіслані автоматично".format(message.from_user, bot.get_me()), parse_mode='html', reply_markup=markup)

@bot.message_handler(commands=["registration"])
def handle_start(message):
    bot.send_message(message.chat.id, "Реєстрація\n\nБудь ласка, введи своє ім'я.")
    bot.register_next_step_handler(message, process_name)

def process_name(message):
    user_data['name'] = message.text
    bot.send_message(message.chat.id, "Тепер введи своє прізвище.")
    bot.register_next_step_handler(message, process_surname)

def process_surname(message):
    user_data['surname'] = message.text
    bot.send_message(message.chat.id, "Введи свій номер телефону.")
    bot.register_next_step_handler(message, process_phone)

def process_phone(message):
    user_data['phone'] = message.text
    bot.send_message(message.chat.id, "Напиши свою адресу проживання.")
    bot.register_next_step_handler(message, process_address)
    #honenumber = user_data['phone']
    #if check_volunteer_status(phonenumber):
    #    bot.send_message(message.chat.id, "Твій номер телефону знаходиться в базі волонтерів. Ти зареєстрований як волонтер.")
    #else:
    #    bot.send_message(message.chat.id, "Номер телефону не знайдено в таблиці волонтерів. Ти зареєстрований як користувач.")

def process_address(message):
    user_data['address'] = message.text
    registration_complete_message = f"Реєстрація завершена!\n\nІм'я: {user_data['name']}\nПрізвище: {user_data['surname']}\nНомер телефону: {user_data['phone']}\nАдреса проживання: {user_data['address']}"
    bot.send_message(message.chat.id, registration_complete_message)
    #save_user_data(UserName="Клієнт", FirstName=user_data['name'], LastName=user_data['surname'], PhoneNumber=user_data['phone'], Address=user_data['address'], ProjectID="None", UserID=message.from_user.id)

@bot.message_handler(commands=["register_problem"])
def handle_start_project(message):
    bot.send_message(message.chat.id, "Реєстрація\n\nБудь ласка, введи назву проблеми.")
    bot.register_next_step_handler(message, process_name_project)

def process_name_project(message):
    project_data['name'] = message.text
    bot.send_message(message.chat.id, "Тепер введи опис проблеми.")
    bot.register_next_step_handler(message, process_description)

def process_description(message):
    project_data['description'] = message.text
    bot.send_message(message.chat.id, "Вкажи необхідних фахівців.")
    bot.register_next_step_handler(message, process_type)

def process_type(message):
    user_data['type'] = message.text
    bot.send_message(message.chat.id, "Вкажи дату, коли потрібна допомога.")
    bot.register_next_step_handler(message, process_date_of_start)

def process_date_of_start(message):
    user_data['date'] = message.text

    bot.register_next_step_handler(message,registration_complete )
    bot.send_message(message.chat.id, "Надішліть фото обєкту")



@bot.message_handler(content_types=['photo'])
def registration_complete(message):

    photo = message.photo[-1]
    file_id = photo.file_id
    file_info = bot.get_file(file_id)
    file_path = file_info.file_path


    #ownloaded_file = bot.download_file(file_path)

    #photo_path = f"photos/{file_id}.jpg"
    #with open(photo_path, 'wb') as f:
    #    f.write(downloaded_file)
    registration_complete_message = f"Реєстрація завершена!\n\nНазва проблеми: {project_data['name']}\nОпис проблеми: {project_data['description']}\nДата: {user_data['date']}"

    bot.reply_to(message, registration_complete_message)

bot.polling(none_stop=True)

