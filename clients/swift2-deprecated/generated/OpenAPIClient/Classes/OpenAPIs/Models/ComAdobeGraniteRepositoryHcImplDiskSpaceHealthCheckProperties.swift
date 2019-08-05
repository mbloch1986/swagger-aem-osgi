//
// ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties: JSONEncodable {
    public var hcTags: ConfigNodePropertyArray?
    public var diskSpaceWarnThreshold: ConfigNodePropertyInteger?
    public var diskSpaceErrorThreshold: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["hc.tags"] = self.hcTags?.encodeToJSON()
        nillableDictionary["disk.space.warn.threshold"] = self.diskSpaceWarnThreshold?.encodeToJSON()
        nillableDictionary["disk.space.error.threshold"] = self.diskSpaceErrorThreshold?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}