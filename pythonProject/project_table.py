import mysql.connector
from config import your_host, your_username, your_password, your_database

def ensure_connection(func):
    def inner(*args, **kwargs):
        with mysql.connector.connect(
            host=your_host,
            user=your_username,
            password=your_password,
            database=your_database
        ) as conn:
            res = func(conn, *args, **kwargs)
        return res
    return inner

@ensure_connection
def save_project_data(conn, ProjectName, ProjectDESC, ProjectType, DateStart, TelegramUser):
    # Встановлення з'єднання з базою даних
    cursor = conn.cursor()

    # Виконання запиту INSERT для вставки даних в таблицю Project
    sql = "INSERT INTO Project (ProjectName, ProjectDESC, ProjectType, DateStart, TelegramUser) VALUES (%s, %s, %s, %s, %s)"
    values = (ProjectName, ProjectDESC, ProjectType, DateStart, TelegramUser)
    cursor.execute(sql, values)

    # Збереження змін у базі даних
    conn.commit()

    # Закриття курсора
    cursor.close()

    # Закриття з'єднання з базою даних
    conn.close()