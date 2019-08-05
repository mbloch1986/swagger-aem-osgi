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


#include "OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::~OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties() {
    
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::init() {
    m_commits_tracker_writer_groups_isSet = false;
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(commits_tracker_writer_groups, json[QString("commitsTrackerWriterGroups")]);
    
}

QString
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(commits_tracker_writer_groups.isSet()){
        obj.insert(QString("commitsTrackerWriterGroups"), ::OpenAPI::toJsonValue(commits_tracker_writer_groups));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::getCommitsTrackerWriterGroups() const {
    return commits_tracker_writer_groups;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::setCommitsTrackerWriterGroups(const OAIConfigNodePropertyArray &commits_tracker_writer_groups) {
    this->commits_tracker_writer_groups = commits_tracker_writer_groups;
    this->m_commits_tracker_writer_groups_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreMonitorServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(commits_tracker_writer_groups.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
