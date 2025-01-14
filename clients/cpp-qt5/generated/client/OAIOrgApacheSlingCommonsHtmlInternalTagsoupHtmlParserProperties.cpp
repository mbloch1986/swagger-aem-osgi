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


#include "OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties() {
    init();
}

OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::~OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::init() {
    parser_features = new OAIConfigNodePropertyArray();
    m_parser_features_isSet = false;
}

void
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::cleanup() {
    if(parser_features != nullptr) { 
        delete parser_features;
    }
}

OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties*
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&parser_features, pJson["parser.features"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::asJsonObject() {
    QJsonObject obj;
    if((parser_features != nullptr) && (parser_features->isSet())){
        toJsonValue(QString("parser.features"), parser_features, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::getParserFeatures() {
    return parser_features;
}
void
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::setParserFeatures(OAIConfigNodePropertyArray* parser_features) {
    this->parser_features = parser_features;
    this->m_parser_features_isSet = true;
}


bool
OAIOrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(parser_features != nullptr && parser_features->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

