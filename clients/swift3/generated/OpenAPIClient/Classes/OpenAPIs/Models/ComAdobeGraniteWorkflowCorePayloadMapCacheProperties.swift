//
// ComAdobeGraniteWorkflowCorePayloadMapCacheProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteWorkflowCorePayloadMapCacheProperties: JSONEncodable {

    public var getSystemWorkflowModels: ConfigNodePropertyArray?
    public var getPackageRootPath: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["getSystemWorkflowModels"] = self.getSystemWorkflowModels?.encodeToJSON()
        nillableDictionary["getPackageRootPath"] = self.getPackageRootPath?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

