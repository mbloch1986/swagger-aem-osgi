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
import ConfigNodePropertyBoolean from './ConfigNodePropertyBoolean';
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties model module.
 * @module model/ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties
 * @version 1.0.0
 */
class ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties {
    /**
     * Constructs a new <code>ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties</code>.
     * @alias module:model/ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties
     */
    constructor() { 
        
        ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties} obj Optional instance to populate.
     * @return {module:model/ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties} The populated <code>ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties();

            if (data.hasOwnProperty('operation')) {
                obj['operation'] = ConfigNodePropertyString.constructFromObject(data['operation']);
            }
            if (data.hasOwnProperty('operationIcon')) {
                obj['operationIcon'] = ConfigNodePropertyString.constructFromObject(data['operationIcon']);
            }
            if (data.hasOwnProperty('topicName')) {
                obj['topicName'] = ConfigNodePropertyString.constructFromObject(data['topicName']);
            }
            if (data.hasOwnProperty('emailEnabled')) {
                obj['emailEnabled'] = ConfigNodePropertyBoolean.constructFromObject(data['emailEnabled']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} operation
 */
ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties.prototype['operation'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} operationIcon
 */
ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties.prototype['operationIcon'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} topicName
 */
ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties.prototype['topicName'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} emailEnabled
 */
ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties.prototype['emailEnabled'] = undefined;






export default ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProviderServiceProperties;

