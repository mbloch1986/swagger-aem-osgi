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
import ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryProperties from './ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryProperties';

/**
 * The ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo model module.
 * @module model/ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo
 * @version 1.0.0
 */
class ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo {
    /**
     * Constructs a new <code>ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo</code>.
     * @alias module:model/ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo
     */
    constructor() { 
        
        ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo} obj Optional instance to populate.
     * @return {module:model/ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo} The populated <code>ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo();

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
                obj['properties'] = ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo.prototype['description'] = undefined;

/**
 * @member {module:model/ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryProperties} properties
 */
ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo.prototype['properties'] = undefined;






export default ComDayCqMcmLandingpageParserTaghandlersMboxTargetComponentTagHandlerFactoryInfo;

