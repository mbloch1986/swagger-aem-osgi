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
import ConfigNodePropertyInteger from './ConfigNodePropertyInteger';
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties model module.
 * @module model/OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties
 * @version 1.0.0
 */
class OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties {
    /**
     * Constructs a new <code>OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties</code>.
     * @alias module:model/OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties
     */
    constructor() { 
        
        OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties} The populated <code>OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('endpoints')) {
                obj['endpoints'] = ConfigNodePropertyArray.constructFromObject(data['endpoints']);
            }
            if (data.hasOwnProperty('pull.items')) {
                obj['pull.items'] = ConfigNodePropertyInteger.constructFromObject(data['pull.items']);
            }
            if (data.hasOwnProperty('packageBuilder.target')) {
                obj['packageBuilder.target'] = ConfigNodePropertyString.constructFromObject(data['packageBuilder.target']);
            }
            if (data.hasOwnProperty('transportSecretProvider.target')) {
                obj['transportSecretProvider.target'] = ConfigNodePropertyString.constructFromObject(data['transportSecretProvider.target']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} endpoints
 */
OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.prototype['endpoints'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} pull.items
 */
OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.prototype['pull.items'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} packageBuilder.target
 */
OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.prototype['packageBuilder.target'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} transportSecretProvider.target
 */
OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.prototype['transportSecretProvider.target'] = undefined;






export default OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties;
