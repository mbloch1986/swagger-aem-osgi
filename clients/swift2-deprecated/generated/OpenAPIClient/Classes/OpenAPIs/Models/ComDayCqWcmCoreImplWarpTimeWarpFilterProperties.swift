//
// ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties: JSONEncodable {
    public var filterOrder: ConfigNodePropertyString?
    public var filterScope: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["filter.order"] = self.filterOrder?.encodeToJSON()
        nillableDictionary["filter.scope"] = self.filterScope?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}