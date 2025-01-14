/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryProperties from './OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryProperties';

/**
 * The OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo model module.
 * @module model/OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo
 * @version 1.0.0
 */
class OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo {
    /**
     * Constructs a new <code>OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo</code>.
     * @alias module:model/OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo
     */
    constructor() { 
        
        OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo} The populated <code>OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo();

            if (data.hasOwnProperty('pid')) {
                obj['pid'] = ApiClient.convertToType(data['pid'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo.prototype['description'] = undefined;

/**
 * @member {module:model/OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryProperties} properties
 */
OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo.prototype['properties'] = undefined;






export default OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoryInfo;

