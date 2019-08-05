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
 * OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties_H
#define OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties: public OAIObject {
public:
    OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties();
    OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties(QString json);
    ~OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getDeletePathRegexps() const;
    void setDeletePathRegexps(const OAIConfigNodePropertyArray &delete_path_regexps);

    OAIConfigNodePropertyString getDeleteSql2Query() const;
    void setDeleteSql2Query(const OAIConfigNodePropertyString &delete_sql2_query);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray delete_path_regexps;
    bool m_delete_path_regexps_isSet;

    OAIConfigNodePropertyString delete_sql2_query;
    bool m_delete_sql2_query_isSet;

};

}

#endif // OAIComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties_H