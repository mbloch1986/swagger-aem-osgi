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
 * OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties_H
#define OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties: public OAIObject {
public:
    OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties();
    OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties(QString json);
    ~OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getDeleteNameRegexps() const;
    void setDeleteNameRegexps(const OAIConfigNodePropertyArray &delete_name_regexps);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray delete_name_regexps;
    bool m_delete_name_regexps_isSet;

};

}

#endif // OAIComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties_H
