#include "data.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

Data::Data() {}

int Data::currentUser = 0;
vector<user> Data::users;

bool Data::writeFile() {
    const QString fileName = "User.txt";
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCritical() << "Failed to open file for writing: " << file.errorString();
        return false;
    }

    QTextStream stream(&file);
    for (const auto& userData : Data::users) {
        stream << QString::fromStdString(userData.FirstName) << " "
               << QString::fromStdString(userData.LastName) << " "
               << QString::fromStdString(userData.UserName) << " "
               << QString::fromStdString(userData.Password) << " "
               << QString::number(userData.Age) << " "  // Convert integer to QString
               << QString::fromStdString(userData.Gender) << " "
               << QString::fromStdString(userData.Country) << '\n';
    }

    file.close();
    return true;
}

void Data::ReadFile() {
    const QString fileName = "User.txt";
    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qCritical() << "Failed to open file for reading: " << file.errorString();
        return;
    }

    QTextStream stream(&file);
    while (!stream.atEnd()) {
        QStringList tokens = stream.readLine().trimmed().split(" ");
        if (tokens.size() >= 7) {
            user u(tokens[0].toStdString(), tokens[1].toStdString(), tokens[2].toStdString(),
                   tokens[3].toStdString(), tokens[4].toInt(),  // Convert QString to integer
                   tokens[5].toStdString(), tokens[6].toStdString());
            Data::users.push_back(u);
        } else {
            qWarning() << "Invalid line encountered while reading file";
        }
    }

    file.close();
}
