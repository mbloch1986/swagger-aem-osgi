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
import ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryProperties from './ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryProperties';

/**
 * The ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo model module.
 * @module model/ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo
 * @version 1.0.0
 */
class ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo {
    /**
     * Constructs a new <code>ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo</code>.
     * @alias module:model/ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo
     */
    constructor() { 
        
        ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo} obj Optional instance to populate.
     * @return {module:model/ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo} The populated <code>ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo();

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
                obj['properties'] = ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo.prototype['description'] = undefined;

/**
 * @member {module:model/ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryProperties} properties
 */
ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo.prototype['properties'] = undefined;






export default ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHandlerFactoryInfo;

