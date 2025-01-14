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
 * The OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties model module.
 * @module model/OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties
 * @version 1.0.0
 */
class OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties {
    /**
     * Constructs a new <code>OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties</code>.
     * @alias module:model/OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties
     */
    constructor() { 
        
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties} The populated <code>OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties();

            if (data.hasOwnProperty('path.desc.field')) {
                obj['path.desc.field'] = ConfigNodePropertyString.constructFromObject(data['path.desc.field']);
            }
            if (data.hasOwnProperty('path.child.field')) {
                obj['path.child.field'] = ConfigNodePropertyString.constructFromObject(data['path.child.field']);
            }
            if (data.hasOwnProperty('path.parent.field')) {
                obj['path.parent.field'] = ConfigNodePropertyString.constructFromObject(data['path.parent.field']);
            }
            if (data.hasOwnProperty('path.exact.field')) {
                obj['path.exact.field'] = ConfigNodePropertyString.constructFromObject(data['path.exact.field']);
            }
            if (data.hasOwnProperty('catch.all.field')) {
                obj['catch.all.field'] = ConfigNodePropertyString.constructFromObject(data['catch.all.field']);
            }
            if (data.hasOwnProperty('collapsed.path.field')) {
                obj['collapsed.path.field'] = ConfigNodePropertyString.constructFromObject(data['collapsed.path.field']);
            }
            if (data.hasOwnProperty('path.depth.field')) {
                obj['path.depth.field'] = ConfigNodePropertyString.constructFromObject(data['path.depth.field']);
            }
            if (data.hasOwnProperty('commit.policy')) {
                obj['commit.policy'] = ConfigNodePropertyDropDown.constructFromObject(data['commit.policy']);
            }
            if (data.hasOwnProperty('rows')) {
                obj['rows'] = ConfigNodePropertyInteger.constructFromObject(data['rows']);
            }
            if (data.hasOwnProperty('path.restrictions')) {
                obj['path.restrictions'] = ConfigNodePropertyBoolean.constructFromObject(data['path.restrictions']);
            }
            if (data.hasOwnProperty('property.restrictions')) {
                obj['property.restrictions'] = ConfigNodePropertyBoolean.constructFromObject(data['property.restrictions']);
            }
            if (data.hasOwnProperty('primarytypes.restrictions')) {
                obj['primarytypes.restrictions'] = ConfigNodePropertyBoolean.constructFromObject(data['primarytypes.restrictions']);
            }
            if (data.hasOwnProperty('ignored.properties')) {
                obj['ignored.properties'] = ConfigNodePropertyArray.constructFromObject(data['ignored.properties']);
            }
            if (data.hasOwnProperty('used.properties')) {
                obj['used.properties'] = ConfigNodePropertyArray.constructFromObject(data['used.properties']);
            }
            if (data.hasOwnProperty('type.mappings')) {
                obj['type.mappings'] = ConfigNodePropertyArray.constructFromObject(data['type.mappings']);
            }
            if (data.hasOwnProperty('property.mappings')) {
                obj['property.mappings'] = ConfigNodePropertyArray.constructFromObject(data['property.mappings']);
            }
            if (data.hasOwnProperty('collapse.jcrcontent.nodes')) {
                obj['collapse.jcrcontent.nodes'] = ConfigNodePropertyBoolean.constructFromObject(data['collapse.jcrcontent.nodes']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} path.desc.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.desc.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path.child.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.child.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path.parent.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.parent.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path.exact.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.exact.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} catch.all.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['catch.all.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} collapsed.path.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['collapsed.path.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} path.depth.field
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.depth.field'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyDropDown} commit.policy
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['commit.policy'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} rows
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['rows'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} path.restrictions
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['path.restrictions'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} property.restrictions
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['property.restrictions'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} primarytypes.restrictions
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['primarytypes.restrictions'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} ignored.properties
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['ignored.properties'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} used.properties
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['used.properties'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} type.mappings
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['type.mappings'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyArray} property.mappings
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['property.mappings'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyBoolean} collapse.jcrcontent.nodes
 */
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties.prototype['collapse.jcrcontent.nodes'] = undefined;






export default OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProviderServiceProperties;

