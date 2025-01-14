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


#include "OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties() {
    this->init();
}

OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::~OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties() {
    
}

void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::init() {
    m_cq_wcm_msm_action_excludednodetypes_isSet = false;
    m_cq_wcm_msm_action_excludedparagraphitems_isSet = false;
    m_cq_wcm_msm_action_excludedprops_isSet = false;
    m_cq_wcm_msm_impl_actions_pagemove_prop_reference_update_isSet = false;
}

void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_wcm_msm_action_excludednodetypes, json[QString("cq.wcm.msm.action.excludednodetypes")]);
    
    ::OpenAPI::fromJsonValue(cq_wcm_msm_action_excludedparagraphitems, json[QString("cq.wcm.msm.action.excludedparagraphitems")]);
    
    ::OpenAPI::fromJsonValue(cq_wcm_msm_action_excludedprops, json[QString("cq.wcm.msm.action.excludedprops")]);
    
    ::OpenAPI::fromJsonValue(cq_wcm_msm_impl_actions_pagemove_prop_reference_update, json[QString("cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate")]);
    
}

QString
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_wcm_msm_action_excludednodetypes.isSet()){
        obj.insert(QString("cq.wcm.msm.action.excludednodetypes"), ::OpenAPI::toJsonValue(cq_wcm_msm_action_excludednodetypes));
    }
	if(cq_wcm_msm_action_excludedparagraphitems.isSet()){
        obj.insert(QString("cq.wcm.msm.action.excludedparagraphitems"), ::OpenAPI::toJsonValue(cq_wcm_msm_action_excludedparagraphitems));
    }
	if(cq_wcm_msm_action_excludedprops.isSet()){
        obj.insert(QString("cq.wcm.msm.action.excludedprops"), ::OpenAPI::toJsonValue(cq_wcm_msm_action_excludedprops));
    }
	if(cq_wcm_msm_impl_actions_pagemove_prop_reference_update.isSet()){
        obj.insert(QString("cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate"), ::OpenAPI::toJsonValue(cq_wcm_msm_impl_actions_pagemove_prop_reference_update));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludednodetypes() const {
    return cq_wcm_msm_action_excludednodetypes;
}
void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludednodetypes(const OAIConfigNodePropertyArray &cq_wcm_msm_action_excludednodetypes) {
    this->cq_wcm_msm_action_excludednodetypes = cq_wcm_msm_action_excludednodetypes;
    this->m_cq_wcm_msm_action_excludednodetypes_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludedparagraphitems() const {
    return cq_wcm_msm_action_excludedparagraphitems;
}
void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludedparagraphitems(const OAIConfigNodePropertyArray &cq_wcm_msm_action_excludedparagraphitems) {
    this->cq_wcm_msm_action_excludedparagraphitems = cq_wcm_msm_action_excludedparagraphitems;
    this->m_cq_wcm_msm_action_excludedparagraphitems_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludedprops() const {
    return cq_wcm_msm_action_excludedprops;
}
void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludedprops(const OAIConfigNodePropertyArray &cq_wcm_msm_action_excludedprops) {
    this->cq_wcm_msm_action_excludedprops = cq_wcm_msm_action_excludedprops;
    this->m_cq_wcm_msm_action_excludedprops_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmImplActionsPagemovePropReferenceUpdate() const {
    return cq_wcm_msm_impl_actions_pagemove_prop_reference_update;
}
void
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmImplActionsPagemovePropReferenceUpdate(const OAIConfigNodePropertyBoolean &cq_wcm_msm_impl_actions_pagemove_prop_reference_update) {
    this->cq_wcm_msm_impl_actions_pagemove_prop_reference_update = cq_wcm_msm_impl_actions_pagemove_prop_reference_update;
    this->m_cq_wcm_msm_impl_actions_pagemove_prop_reference_update_isSet = true;
}


bool
OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_wcm_msm_action_excludednodetypes.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_wcm_msm_action_excludedparagraphitems.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_wcm_msm_action_excludedprops.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_wcm_msm_impl_actions_pagemove_prop_reference_update.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

