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

/*
 * OAIOrgApacheSlingEngineImplLogRequestLoggerProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingEngineImplLogRequestLoggerProperties_H
#define OAIOrgApacheSlingEngineImplLogRequestLoggerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingEngineImplLogRequestLoggerProperties: public OAIObject {
public:
    OAIOrgApacheSlingEngineImplLogRequestLoggerProperties();
    OAIOrgApacheSlingEngineImplLogRequestLoggerProperties(QString json);
    ~OAIOrgApacheSlingEngineImplLogRequestLoggerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getRequestLogOutput() const;
    void setRequestLogOutput(const OAIConfigNodePropertyString &request_log_output);

    OAIConfigNodePropertyDropDown getRequestLogOutputtype() const;
    void setRequestLogOutputtype(const OAIConfigNodePropertyDropDown &request_log_outputtype);

    OAIConfigNodePropertyBoolean getRequestLogEnabled() const;
    void setRequestLogEnabled(const OAIConfigNodePropertyBoolean &request_log_enabled);

    OAIConfigNodePropertyString getAccessLogOutput() const;
    void setAccessLogOutput(const OAIConfigNodePropertyString &access_log_output);

    OAIConfigNodePropertyDropDown getAccessLogOutputtype() const;
    void setAccessLogOutputtype(const OAIConfigNodePropertyDropDown &access_log_outputtype);

    OAIConfigNodePropertyBoolean getAccessLogEnabled() const;
    void setAccessLogEnabled(const OAIConfigNodePropertyBoolean &access_log_enabled);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString request_log_output;
    bool m_request_log_output_isSet;

    OAIConfigNodePropertyDropDown request_log_outputtype;
    bool m_request_log_outputtype_isSet;

    OAIConfigNodePropertyBoolean request_log_enabled;
    bool m_request_log_enabled_isSet;

    OAIConfigNodePropertyString access_log_output;
    bool m_access_log_output_isSet;

    OAIConfigNodePropertyDropDown access_log_outputtype;
    bool m_access_log_outputtype_isSet;

    OAIConfigNodePropertyBoolean access_log_enabled;
    bool m_access_log_enabled_isSet;

};

}

#endif // OAIOrgApacheSlingEngineImplLogRequestLoggerProperties_H