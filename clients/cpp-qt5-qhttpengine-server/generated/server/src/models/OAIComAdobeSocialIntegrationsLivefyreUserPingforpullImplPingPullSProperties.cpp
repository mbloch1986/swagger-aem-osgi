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


#include "OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties() {
    this->init();
}

OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::~OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties() {
    
}

void
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::init() {
    m_communities_integration_livefyre_sling_event_filter_isSet = false;
}

void
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(communities_integration_livefyre_sling_event_filter, json[QString("communities.integration.livefyre.sling.event.filter")]);
    
}

QString
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::asJsonObject() const {
    QJsonObject obj;
	if(communities_integration_livefyre_sling_event_filter.isSet()){
        obj.insert(QString("communities.integration.livefyre.sling.event.filter"), ::OpenAPI::toJsonValue(communities_integration_livefyre_sling_event_filter));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::getCommunitiesIntegrationLivefyreSlingEventFilter() const {
    return communities_integration_livefyre_sling_event_filter;
}
void
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::setCommunitiesIntegrationLivefyreSlingEventFilter(const OAIConfigNodePropertyString &communities_integration_livefyre_sling_event_filter) {
    this->communities_integration_livefyre_sling_event_filter = communities_integration_livefyre_sling_event_filter;
    this->m_communities_integration_livefyre_sling_event_filter_isSet = true;
}


bool
OAIComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(communities_integration_livefyre_sling_event_filter.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

