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
import ConfigNodePropertyArray from './ConfigNodePropertyArray';
import ConfigNodePropertyBoolean from './ConfigNodePropertyBoolean';
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties model module.
 * @module model/OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties
 * @version 1.0.0
 */
class OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties {
    /**
     * Constructs a new <code>OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties</code>.
     * @alias module:model/OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties
     */
    constructor() { 
        
        OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties} The populated <code>OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('path')) {
                obj['path'] = ConfigNodePropertyString.constructFromObject(data['path']);
            }
            if (data.hasOwnProperty('ignoredPathsPatterns')) {
                obj['ignoredPathsPatterns'] = ConfigNodePropertyArray.constructFromObject(data['ignoredPathsPatterns']);
            }
            if (data.hasOwnProperty('serviceName')) {
                obj['serviceName'] = ConfigNodePropertyString.constructFromObject(data['serviceName']);
            }
            if (data.hasOwnProperty('deep')) {
                obj['deep'] = ConfigNodePropertyBoolean.constructFromObject(data['deep']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path
 */
OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.prototype['path'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} ignoredPathsPatterns
 */
OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.prototype['ignoredPathsPatterns'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} serviceName
 */
OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.prototype['serviceName'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} deep
 */
OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties.prototype['deep'] = undefined;






export default OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerFactoryProperties;

