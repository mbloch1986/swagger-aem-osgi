//
// ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties: JSONEncodable {
    public var cqCommerceAssetHandlerFallback: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.commerce.asset.handler.fallback"] = self.cqCommerceAssetHandlerFallback?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
