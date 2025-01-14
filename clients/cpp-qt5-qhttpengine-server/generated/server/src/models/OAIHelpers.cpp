/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QDebug>
#include "OAIHelpers.h"
#include "OAIObject.h"

namespace OpenAPI {


QString
toStringValue(const QString &value) {
    return value;
}

QString
toStringValue(const QDateTime &value){
    // ISO 8601
    return value.toString("yyyy-MM-ddTHH:mm:ss[Z|[+|-]HH:mm]");
}

QString
toStringValue(const QByteArray &value){
    return QString(value);
}

QString
toStringValue(const QDate &value){
    // ISO 8601
    return value.toString(Qt::DateFormat::ISODate);
}

QString
toStringValue(const qint32 &value) {
    return QString::number(value);
}

QString
toStringValue(const qint64 &value) {
    return QString::number(value);
}

QString
toStringValue(const bool &value) {
    return QString(value ? "true" : "false");
}

QString
toStringValue(const float &value){
    return QString::number(value);
}

QString
toStringValue(const double &value){
    return QString::number(value);
}

QJsonValue
toJsonValue(const QString &value){
    return  QJsonValue(value);
}

QJsonValue
toJsonValue(const QDateTime &value){
    return QJsonValue(value.toString(Qt::ISODate));
}

QJsonValue
toJsonValue(const QByteArray &value){
    return QJsonValue(QString(value.toBase64()));
}

QJsonValue
toJsonValue(const QDate &value){
    return QJsonValue(value.toString(Qt::ISODate));
}

QJsonValue
toJsonValue(const qint32 &value){
    return QJsonValue(value);
}

QJsonValue
toJsonValue(const qint64 &value){
    return QJsonValue(value);
}

QJsonValue
toJsonValue(const bool &value){
    return QJsonValue(value);
}

QJsonValue
toJsonValue(const float &value){
    return QJsonValue(value);
}

QJsonValue
toJsonValue(const double &value){
    return QJsonValue(value);
}

QJsonValue
toJsonValue(const OAIObject &value){
    return value.asJsonObject();
}

bool
fromStringValue(const QString &inStr, QString &value){
    value.clear();
    value.append(inStr);
    return !inStr.isEmpty();
}

bool
fromStringValue(const QString &inStr, QDateTime &value){
    if(inStr.isEmpty()){
        return false;
    }
    else{
        auto dateTime = QDateTime::fromString(inStr, "yyyy-MM-ddTHH:mm:ss[Z|[+|-]HH:mm]");
        if(dateTime.isValid()){
            value.setDate(dateTime.date());
            value.setTime(dateTime.time());
        }
        else{
            qDebug() << "DateTime is invalid";
        }
        return dateTime.isValid();
    }
}

bool
fromStringValue(const QString &inStr, QByteArray &value){
    if(inStr.isEmpty()){
        return false;
    }
    else{
        value.clear();
        value.append(inStr.toUtf8());
        return value.count() > 0;
    }
}

bool
fromStringValue(const QString &inStr, QDate &value){
    if(inStr.isEmpty()){
        return false;
    }
    else{
        auto date = QDate::fromString(inStr, Qt::DateFormat::ISODate);
        if(date.isValid()){
            value.setDate(date.year(), date.month(), date.day());
        }
        else{
            qDebug() << "Date is invalid";
        }
        return date.isValid();
    }
}

bool
fromStringValue(const QString &inStr, qint32 &value){
    bool ok = false;
    value = QVariant(inStr).toInt(&ok);
    return ok;
}

bool
fromStringValue(const QString &inStr, qint64 &value){
    bool ok = false;
    value = QVariant(inStr).toLongLong(&ok);
    return ok;
}

bool
fromStringValue(const QString &inStr, bool &value){
    value = QVariant(inStr).toBool();
    return ((inStr == "true") || (inStr == "false"));
}

bool
fromStringValue(const QString &inStr, float &value){
    bool ok = false;
    value = QVariant(inStr).toFloat(&ok);
    return ok;
}

bool
fromStringValue(const QString &inStr, double &value){
    bool ok = false;
    value = QVariant(inStr).toDouble(&ok);
    return ok;
}

void
fromJsonValue(QString &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        if(jval.isString()){
            value = jval.toString();
        } else if(jval.isBool()) {
            value =  jval.toBool() ? "true" : "false";
        } else if(jval.isDouble()){
            value = QString::number(jval.toDouble());
        }
    }

}

void
fromJsonValue(QDateTime &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = QDateTime::fromString(jval.toString(), Qt::ISODate);
    }

}

void
fromJsonValue(QByteArray &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = QByteArray::fromBase64(QByteArray::fromStdString(jval.toString().toStdString()));
    }

}

void
fromJsonValue(QDate &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = QDate::fromString(jval.toString(), Qt::ISODate);
    }

}

void
fromJsonValue(qint32 &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = jval.toInt();
    }

}

void
fromJsonValue(qint64 &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = jval.toVariant().toLongLong();
    }

}

void
fromJsonValue(bool &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = jval.toBool();
    }

}

void
fromJsonValue(float &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = static_cast<float>(jval.toDouble());
    }
}

void
fromJsonValue(double &value, const QJsonValue &jval){
    if(!(jval.isUndefined() || jval.isNull())){
        value = jval.toDouble();
    }

}

void
fromJsonValue(OAIObject  &value, const QJsonValue &jval){
    if(jval.isObject()){
        value.fromJsonObject(jval.toObject());
    }
}

}
