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


#include "OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties() {
    this->init();
}

OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::~OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties() {
    
}

void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::init() {
    m_jdbc_driver_class_isSet = false;
    m_jdbc_connection_uri_isSet = false;
    m_jdbc_username_isSet = false;
    m_jdbc_password_isSet = false;
    m_jdbc_validation_query_isSet = false;
    m_default_readonly_isSet = false;
    m_default_autocommit_isSet = false;
    m_pool_size_isSet = false;
    m_pool_max_wait_msec_isSet = false;
    m_datasource_name_isSet = false;
    m_datasource_svc_properties_isSet = false;
}

void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(jdbc_driver_class, json[QString("jdbc.driver.class")]);
    
    ::OpenAPI::fromJsonValue(jdbc_connection_uri, json[QString("jdbc.connection.uri")]);
    
    ::OpenAPI::fromJsonValue(jdbc_username, json[QString("jdbc.username")]);
    
    ::OpenAPI::fromJsonValue(jdbc_password, json[QString("jdbc.password")]);
    
    ::OpenAPI::fromJsonValue(jdbc_validation_query, json[QString("jdbc.validation.query")]);
    
    ::OpenAPI::fromJsonValue(default_readonly, json[QString("default.readonly")]);
    
    ::OpenAPI::fromJsonValue(default_autocommit, json[QString("default.autocommit")]);
    
    ::OpenAPI::fromJsonValue(pool_size, json[QString("pool.size")]);
    
    ::OpenAPI::fromJsonValue(pool_max_wait_msec, json[QString("pool.max.wait.msec")]);
    
    ::OpenAPI::fromJsonValue(datasource_name, json[QString("datasource.name")]);
    
    ::OpenAPI::fromJsonValue(datasource_svc_properties, json[QString("datasource.svc.properties")]);
    
}

QString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(jdbc_driver_class.isSet()){
        obj.insert(QString("jdbc.driver.class"), ::OpenAPI::toJsonValue(jdbc_driver_class));
    }
	if(jdbc_connection_uri.isSet()){
        obj.insert(QString("jdbc.connection.uri"), ::OpenAPI::toJsonValue(jdbc_connection_uri));
    }
	if(jdbc_username.isSet()){
        obj.insert(QString("jdbc.username"), ::OpenAPI::toJsonValue(jdbc_username));
    }
	if(jdbc_password.isSet()){
        obj.insert(QString("jdbc.password"), ::OpenAPI::toJsonValue(jdbc_password));
    }
	if(jdbc_validation_query.isSet()){
        obj.insert(QString("jdbc.validation.query"), ::OpenAPI::toJsonValue(jdbc_validation_query));
    }
	if(default_readonly.isSet()){
        obj.insert(QString("default.readonly"), ::OpenAPI::toJsonValue(default_readonly));
    }
	if(default_autocommit.isSet()){
        obj.insert(QString("default.autocommit"), ::OpenAPI::toJsonValue(default_autocommit));
    }
	if(pool_size.isSet()){
        obj.insert(QString("pool.size"), ::OpenAPI::toJsonValue(pool_size));
    }
	if(pool_max_wait_msec.isSet()){
        obj.insert(QString("pool.max.wait.msec"), ::OpenAPI::toJsonValue(pool_max_wait_msec));
    }
	if(datasource_name.isSet()){
        obj.insert(QString("datasource.name"), ::OpenAPI::toJsonValue(datasource_name));
    }
	if(datasource_svc_properties.isSet()){
        obj.insert(QString("datasource.svc.properties"), ::OpenAPI::toJsonValue(datasource_svc_properties));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getJdbcDriverClass() const {
    return jdbc_driver_class;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setJdbcDriverClass(const OAIConfigNodePropertyString &jdbc_driver_class) {
    this->jdbc_driver_class = jdbc_driver_class;
    this->m_jdbc_driver_class_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getJdbcConnectionUri() const {
    return jdbc_connection_uri;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setJdbcConnectionUri(const OAIConfigNodePropertyString &jdbc_connection_uri) {
    this->jdbc_connection_uri = jdbc_connection_uri;
    this->m_jdbc_connection_uri_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getJdbcUsername() const {
    return jdbc_username;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setJdbcUsername(const OAIConfigNodePropertyString &jdbc_username) {
    this->jdbc_username = jdbc_username;
    this->m_jdbc_username_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getJdbcPassword() const {
    return jdbc_password;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setJdbcPassword(const OAIConfigNodePropertyString &jdbc_password) {
    this->jdbc_password = jdbc_password;
    this->m_jdbc_password_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getJdbcValidationQuery() const {
    return jdbc_validation_query;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setJdbcValidationQuery(const OAIConfigNodePropertyString &jdbc_validation_query) {
    this->jdbc_validation_query = jdbc_validation_query;
    this->m_jdbc_validation_query_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getDefaultReadonly() const {
    return default_readonly;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setDefaultReadonly(const OAIConfigNodePropertyBoolean &default_readonly) {
    this->default_readonly = default_readonly;
    this->m_default_readonly_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getDefaultAutocommit() const {
    return default_autocommit;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setDefaultAutocommit(const OAIConfigNodePropertyBoolean &default_autocommit) {
    this->default_autocommit = default_autocommit;
    this->m_default_autocommit_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getPoolSize() const {
    return pool_size;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setPoolSize(const OAIConfigNodePropertyInteger &pool_size) {
    this->pool_size = pool_size;
    this->m_pool_size_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getPoolMaxWaitMsec() const {
    return pool_max_wait_msec;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setPoolMaxWaitMsec(const OAIConfigNodePropertyInteger &pool_max_wait_msec) {
    this->pool_max_wait_msec = pool_max_wait_msec;
    this->m_pool_max_wait_msec_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getDatasourceName() const {
    return datasource_name;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setDatasourceName(const OAIConfigNodePropertyString &datasource_name) {
    this->datasource_name = datasource_name;
    this->m_datasource_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::getDatasourceSvcProperties() const {
    return datasource_svc_properties;
}
void
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::setDatasourceSvcProperties(const OAIConfigNodePropertyArray &datasource_svc_properties) {
    this->datasource_svc_properties = datasource_svc_properties;
    this->m_datasource_svc_properties_isSet = true;
}


bool
OAIComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(jdbc_driver_class.isSet()){ isObjectUpdated = true; break;}
    
        if(jdbc_connection_uri.isSet()){ isObjectUpdated = true; break;}
    
        if(jdbc_username.isSet()){ isObjectUpdated = true; break;}
    
        if(jdbc_password.isSet()){ isObjectUpdated = true; break;}
    
        if(jdbc_validation_query.isSet()){ isObjectUpdated = true; break;}
    
        if(default_readonly.isSet()){ isObjectUpdated = true; break;}
    
        if(default_autocommit.isSet()){ isObjectUpdated = true; break;}
    
        if(pool_size.isSet()){ isObjectUpdated = true; break;}
    
        if(pool_max_wait_msec.isSet()){ isObjectUpdated = true; break;}
    
        if(datasource_name.isSet()){ isObjectUpdated = true; break;}
    
        if(datasource_svc_properties.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

