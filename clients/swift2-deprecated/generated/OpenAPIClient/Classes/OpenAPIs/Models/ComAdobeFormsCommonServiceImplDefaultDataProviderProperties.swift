//
// ComAdobeFormsCommonServiceImplDefaultDataProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeFormsCommonServiceImplDefaultDataProviderProperties: JSONEncodable {
    public var alloweddataFileLocations: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["alloweddataFileLocations"] = self.alloweddataFileLocations?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
