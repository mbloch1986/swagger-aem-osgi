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
 * OAIComAdobeGraniteCorsImplCORSPolicyImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteCorsImplCORSPolicyImplProperties_H_
#define OAIComAdobeGraniteCorsImplCORSPolicyImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteCorsImplCORSPolicyImplProperties: public OAIObject {
public:
    OAIComAdobeGraniteCorsImplCORSPolicyImplProperties();
    OAIComAdobeGraniteCorsImplCORSPolicyImplProperties(QString json);
    ~OAIComAdobeGraniteCorsImplCORSPolicyImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteCorsImplCORSPolicyImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getAlloworigin();
    void setAlloworigin(OAIConfigNodePropertyArray* alloworigin);

    OAIConfigNodePropertyArray* getAlloworiginregexp();
    void setAlloworiginregexp(OAIConfigNodePropertyArray* alloworiginregexp);

    OAIConfigNodePropertyArray* getAllowedpaths();
    void setAllowedpaths(OAIConfigNodePropertyArray* allowedpaths);

    OAIConfigNodePropertyArray* getExposedheaders();
    void setExposedheaders(OAIConfigNodePropertyArray* exposedheaders);

    OAIConfigNodePropertyInteger* getMaxage();
    void setMaxage(OAIConfigNodePropertyInteger* maxage);

    OAIConfigNodePropertyArray* getSupportedheaders();
    void setSupportedheaders(OAIConfigNodePropertyArray* supportedheaders);

    OAIConfigNodePropertyArray* getSupportedmethods();
    void setSupportedmethods(OAIConfigNodePropertyArray* supportedmethods);

    OAIConfigNodePropertyBoolean* getSupportscredentials();
    void setSupportscredentials(OAIConfigNodePropertyBoolean* supportscredentials);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* alloworigin;
    bool m_alloworigin_isSet;

    OAIConfigNodePropertyArray* alloworiginregexp;
    bool m_alloworiginregexp_isSet;

    OAIConfigNodePropertyArray* allowedpaths;
    bool m_allowedpaths_isSet;

    OAIConfigNodePropertyArray* exposedheaders;
    bool m_exposedheaders_isSet;

    OAIConfigNodePropertyInteger* maxage;
    bool m_maxage_isSet;

    OAIConfigNodePropertyArray* supportedheaders;
    bool m_supportedheaders_isSet;

    OAIConfigNodePropertyArray* supportedmethods;
    bool m_supportedmethods_isSet;

    OAIConfigNodePropertyBoolean* supportscredentials;
    bool m_supportscredentials_isSet;

};

}

#endif /* OAIComAdobeGraniteCorsImplCORSPolicyImplProperties_H_ */
