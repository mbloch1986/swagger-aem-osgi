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
 * OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_
#define OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties: public OAIObject {
public:
    OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties();
    OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties(QString json);
    ~OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getSrpType();
    void setSrpType(OAIConfigNodePropertyString* srp_type);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* srp_type;
    bool m_srp_type_isSet;

};

}

#endif /* OAIComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_ */