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


#include "OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties() {
    this->init();
}

OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::~OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties() {
    
}

void
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::init() {
    m_payload_move_white_list_isSet = false;
    m_payload_move_handle_from_workflow_process_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(payload_move_white_list, json[QString("payload.move.white.list")]);
    
    ::OpenAPI::fromJsonValue(payload_move_handle_from_workflow_process, json[QString("payload.move.handle.from.workflow.process")]);
    
}

QString
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::asJsonObject() const {
    QJsonObject obj;
	if(payload_move_white_list.isSet()){
        obj.insert(QString("payload.move.white.list"), ::OpenAPI::toJsonValue(payload_move_white_list));
    }
	if(payload_move_handle_from_workflow_process.isSet()){
        obj.insert(QString("payload.move.handle.from.workflow.process"), ::OpenAPI::toJsonValue(payload_move_handle_from_workflow_process));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::getPayloadMoveWhiteList() const {
    return payload_move_white_list;
}
void
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::setPayloadMoveWhiteList(const OAIConfigNodePropertyArray &payload_move_white_list) {
    this->payload_move_white_list = payload_move_white_list;
    this->m_payload_move_white_list_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::getPayloadMoveHandleFromWorkflowProcess() const {
    return payload_move_handle_from_workflow_process;
}
void
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::setPayloadMoveHandleFromWorkflowProcess(const OAIConfigNodePropertyBoolean &payload_move_handle_from_workflow_process) {
    this->payload_move_handle_from_workflow_process = payload_move_handle_from_workflow_process;
    this->m_payload_move_handle_from_workflow_process_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCorePayloadmapPayloadMoveListenerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(payload_move_white_list.isSet()){ isObjectUpdated = true; break;}
    
        if(payload_move_handle_from_workflow_process.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

