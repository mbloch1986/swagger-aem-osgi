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
 * The ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties model module.
 * @module model/ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties
 * @version 1.0.0
 */
class ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties {
    /**
     * Constructs a new <code>ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties</code>.
     * @alias module:model/ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties
     */
    constructor() { 
        
        ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties} The populated <code>ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
            }
            if (data.hasOwnProperty('serviceName')) {
                obj['serviceName'] = ConfigNodePropertyString.constructFromObject(data['serviceName']);
            }
            if (data.hasOwnProperty('userId')) {
                obj['userId'] = ConfigNodePropertyString.constructFromObject(data['userId']);
            }
            if (data.hasOwnProperty('accessTokenProvider.target')) {
                obj['accessTokenProvider.target'] = ConfigNodePropertyString.constructFromObject(data['accessTokenProvider.target']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} name
 */
ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties.prototype['name'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} serviceName
 */
ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties.prototype['serviceName'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} userId
 */
ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties.prototype['userId'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyString} accessTokenProvider.target
 */
ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties.prototype['accessTokenProvider.target'] = undefined;






export default ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistributionTransportSecretProviderProperties;

