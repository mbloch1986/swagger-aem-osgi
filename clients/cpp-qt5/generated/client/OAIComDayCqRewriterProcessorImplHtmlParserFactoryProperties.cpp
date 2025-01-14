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


#include "OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties() {
    init();
}

OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::~OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties() {
    this->cleanup();
}

void
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::init() {
    htmlparser_process_tags = new OAIConfigNodePropertyArray();
    m_htmlparser_process_tags_isSet = false;
    htmlparser_preserve_camel_case = new OAIConfigNodePropertyBoolean();
    m_htmlparser_preserve_camel_case_isSet = false;
}

void
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::cleanup() {
    if(htmlparser_process_tags != nullptr) { 
        delete htmlparser_process_tags;
    }
    if(htmlparser_preserve_camel_case != nullptr) { 
        delete htmlparser_preserve_camel_case;
    }
}

OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties*
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&htmlparser_process_tags, pJson["htmlparser.processTags"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&htmlparser_preserve_camel_case, pJson["htmlparser.preserveCamelCase"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((htmlparser_process_tags != nullptr) && (htmlparser_process_tags->isSet())){
        toJsonValue(QString("htmlparser.processTags"), htmlparser_process_tags, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((htmlparser_preserve_camel_case != nullptr) && (htmlparser_preserve_camel_case->isSet())){
        toJsonValue(QString("htmlparser.preserveCamelCase"), htmlparser_preserve_camel_case, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::getHtmlparserProcessTags() {
    return htmlparser_process_tags;
}
void
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::setHtmlparserProcessTags(OAIConfigNodePropertyArray* htmlparser_process_tags) {
    this->htmlparser_process_tags = htmlparser_process_tags;
    this->m_htmlparser_process_tags_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::getHtmlparserPreserveCamelCase() {
    return htmlparser_preserve_camel_case;
}
void
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::setHtmlparserPreserveCamelCase(OAIConfigNodePropertyBoolean* htmlparser_preserve_camel_case) {
    this->htmlparser_preserve_camel_case = htmlparser_preserve_camel_case;
    this->m_htmlparser_preserve_camel_case_isSet = true;
}


bool
OAIComDayCqRewriterProcessorImplHtmlParserFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(htmlparser_process_tags != nullptr && htmlparser_process_tags->isSet()){ isObjectUpdated = true; break;}
        if(htmlparser_preserve_camel_case != nullptr && htmlparser_preserve_camel_case->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

