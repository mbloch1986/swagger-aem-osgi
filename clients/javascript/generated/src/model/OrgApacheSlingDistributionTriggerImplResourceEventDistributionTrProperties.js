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
 * The OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties model module.
 * @module model/OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties
 * @version 1.0.0
 */
class OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties {
    /**
     * Constructs a new <code>OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties</code>.
     * @alias module:model/OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties
     */
    constructor() { 
        
        OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties} The populated <code>OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('path')) {
                obj['path'] = ConfigNodePropertyString.constructFromObject(data['path']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path
 */
OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties.prototype['path'] = undefined;






export default OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties;
