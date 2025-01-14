//
// ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties: JSONEncodable {
    public var rootPath: ConfigNodePropertyString?
    public var fixInconsistencies: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["root.path"] = self.rootPath?.encodeToJSON()
        nillableDictionary["fix.inconsistencies"] = self.fixInconsistencies?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
