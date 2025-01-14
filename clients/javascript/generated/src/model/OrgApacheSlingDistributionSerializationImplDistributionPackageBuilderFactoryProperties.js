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
import ConfigNodePropertyDropDown from './ConfigNodePropertyDropDown';
import ConfigNodePropertyInteger from './ConfigNodePropertyInteger';
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties model module.
 * @module model/OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties
 * @version 1.0.0
 */
class OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties {
    /**
     * Constructs a new <code>OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties</code>.
     * @alias module:model/OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties
     */
    constructor() { 
        
        OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties} The populated <code>OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ConfigNodePropertyDropDown.constructFromObject(data['type']);
            }
            if (data.hasOwnProperty('format.target')) {
                obj['format.target'] = ConfigNodePropertyString.constructFromObject(data['format.target']);
            }
            if (data.hasOwnProperty('tempFsFolder')) {
                obj['tempFsFolder'] = ConfigNodePropertyString.constructFromObject(data['tempFsFolder']);
            }
            if (data.hasOwnProperty('fileThreshold')) {
                obj['fileThreshold'] = ConfigNodePropertyInteger.constructFromObject(data['fileThreshold']);
            }
            if (data.hasOwnProperty('memoryUnit')) {
                obj['memoryUnit'] = ConfigNodePropertyDropDown.constructFromObject(data['memoryUnit']);
            }
            if (data.hasOwnProperty('useOffHeapMemory')) {
                obj['useOffHeapMemory'] = ConfigNodePropertyBoolean.constructFromObject(data['useOffHeapMemory']);
            }
            if (data.hasOwnProperty('digestAlgorithm')) {
                obj['digestAlgorithm'] = ConfigNodePropertyDropDown.constructFromObject(data['digestAlgorithm']);
            }
            if (data.hasOwnProperty('monitoringQueueSize')) {
                obj['monitoringQueueSize'] = ConfigNodePropertyInteger.constructFromObject(data['monitoringQueueSize']);
            }
            if (data.hasOwnProperty('cleanupDelay')) {
                obj['cleanupDelay'] = ConfigNodePropertyInteger.constructFromObject(data['cleanupDelay']);
            }
            if (data.hasOwnProperty('package.filters')) {
                obj['package.filters'] = ConfigNodePropertyArray.constructFromObject(data['package.filters']);
            }
            if (data.hasOwnProperty('property.filters')) {
                obj['property.filters'] = ConfigNodePropertyArray.constructFromObject(data['property.filters']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyDropDown} type
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['type'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} format.target
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['format.target'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} tempFsFolder
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['tempFsFolder'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} fileThreshold
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['fileThreshold'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyDropDown} memoryUnit
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['memoryUnit'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} useOffHeapMemory
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['useOffHeapMemory'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyDropDown} digestAlgorithm
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['digestAlgorithm'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} monitoringQueueSize
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['monitoringQueueSize'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} cleanupDelay
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['cleanupDelay'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} package.filters
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['package.filters'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} property.filters
 */
OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties.prototype['property.filters'] = undefined;






export default OrgApacheSlingDistributionSerializationImplDistributionPackageBuilderFactoryProperties;

