//
// ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties: JSONEncodable {
    public var isEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["isEnabled"] = self.isEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
