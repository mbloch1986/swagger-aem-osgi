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
 * OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties_H
#define OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties: public OAIObject {
public:
    OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties();
    OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties(QString json);
    ~OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getFelixInventoryPrinterName() const;
    void setFelixInventoryPrinterName(const OAIConfigNodePropertyString &felix_inventory_printer_name);

    OAIConfigNodePropertyString getFelixInventoryPrinterTitle() const;
    void setFelixInventoryPrinterTitle(const OAIConfigNodePropertyString &felix_inventory_printer_title);

    OAIConfigNodePropertyString getPath() const;
    void setPath(const OAIConfigNodePropertyString &path);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString felix_inventory_printer_name;
    bool m_felix_inventory_printer_name_isSet;

    OAIConfigNodePropertyString felix_inventory_printer_title;
    bool m_felix_inventory_printer_title_isSet;

    OAIConfigNodePropertyString path;
    bool m_path_isSet;

};

}

#endif // OAIOrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties_H
