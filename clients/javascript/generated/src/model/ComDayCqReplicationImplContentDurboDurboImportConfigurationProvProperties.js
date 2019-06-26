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
import ConfigNodePropertyInteger from './ConfigNodePropertyInteger';

/**
 * The ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties model module.
 * @module model/ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties
 * @version 1.0.0
 */
class ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties {
    /**
     * Constructs a new <code>ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties</code>.
     * @alias module:model/ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties
     */
    constructor() { 
        
        ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties} obj Optional instance to populate.
     * @return {module:model/ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties} The populated <code>ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties();

            if (data.hasOwnProperty('preserve.hierarchy.nodes')) {
                obj['preserve.hierarchy.nodes'] = ConfigNodePropertyBoolean.constructFromObject(data['preserve.hierarchy.nodes']);
            }
            if (data.hasOwnProperty('ignore.versioning')) {
                obj['ignore.versioning'] = ConfigNodePropertyBoolean.constructFromObject(data['ignore.versioning']);
            }
            if (data.hasOwnProperty('import.acl')) {
                obj['import.acl'] = ConfigNodePropertyBoolean.constructFromObject(data['import.acl']);
            }
            if (data.hasOwnProperty('save.threshold')) {
                obj['save.threshold'] = ConfigNodePropertyInteger.constructFromObject(data['save.threshold']);
            }
            if (data.hasOwnProperty('preserve.user.paths')) {
                obj['preserve.user.paths'] = ConfigNodePropertyBoolean.constructFromObject(data['preserve.user.paths']);
            }
            if (data.hasOwnProperty('preserve.uuid')) {
                obj['preserve.uuid'] = ConfigNodePropertyBoolean.constructFromObject(data['preserve.uuid']);
            }
            if (data.hasOwnProperty('preserve.uuid.nodetypes')) {
                obj['preserve.uuid.nodetypes'] = ConfigNodePropertyArray.constructFromObject(data['preserve.uuid.nodetypes']);
            }
            if (data.hasOwnProperty('preserve.uuid.subtrees')) {
                obj['preserve.uuid.subtrees'] = ConfigNodePropertyArray.constructFromObject(data['preserve.uuid.subtrees']);
            }
            if (data.hasOwnProperty('auto.commit')) {
                obj['auto.commit'] = ConfigNodePropertyBoolean.constructFromObject(data['auto.commit']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyBoolean} preserve.hierarchy.nodes
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['preserve.hierarchy.nodes'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} ignore.versioning
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['ignore.versioning'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} import.acl
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['import.acl'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} save.threshold
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['save.threshold'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} preserve.user.paths
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['preserve.user.paths'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} preserve.uuid
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['preserve.uuid'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} preserve.uuid.nodetypes
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['preserve.uuid.nodetypes'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} preserve.uuid.subtrees
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['preserve.uuid.subtrees'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} auto.commit
 */
ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.prototype['auto.commit'] = undefined;






export default ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties;
