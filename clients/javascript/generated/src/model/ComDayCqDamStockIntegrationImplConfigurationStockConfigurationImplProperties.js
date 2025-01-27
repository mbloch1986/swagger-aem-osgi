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
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties model module.
 * @module model/ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties
 * @version 1.0.0
 */
class ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties {
    /**
     * Constructs a new <code>ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties</code>.
     * @alias module:model/ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties
     */
    constructor() { 
        
        ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties} obj Optional instance to populate.
     * @return {module:model/ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties} The populated <code>ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('locale')) {
                obj['locale'] = ConfigNodePropertyString.constructFromObject(data['locale']);
            }
            if (data.hasOwnProperty('imsConfig')) {
                obj['imsConfig'] = ConfigNodePropertyString.constructFromObject(data['imsConfig']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} locale
 */
ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.prototype['locale'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} imsConfig
 */
ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.prototype['imsConfig'] = undefined;






export default ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties;

