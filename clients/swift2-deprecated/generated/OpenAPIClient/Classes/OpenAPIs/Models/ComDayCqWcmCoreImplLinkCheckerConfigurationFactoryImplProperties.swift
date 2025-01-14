//
// ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties: JSONEncodable {
    public var linkExpiredPrefix: ConfigNodePropertyString?
    public var linkExpiredRemove: ConfigNodePropertyBoolean?
    public var linkExpiredSuffix: ConfigNodePropertyString?
    public var linkInvalidPrefix: ConfigNodePropertyString?
    public var linkInvalidRemove: ConfigNodePropertyBoolean?
    public var linkInvalidSuffix: ConfigNodePropertyString?
    public var linkPredatedPrefix: ConfigNodePropertyString?
    public var linkPredatedRemove: ConfigNodePropertyBoolean?
    public var linkPredatedSuffix: ConfigNodePropertyString?
    public var linkWcmmodes: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["link.expired.prefix"] = self.linkExpiredPrefix?.encodeToJSON()
        nillableDictionary["link.expired.remove"] = self.linkExpiredRemove?.encodeToJSON()
        nillableDictionary["link.expired.suffix"] = self.linkExpiredSuffix?.encodeToJSON()
        nillableDictionary["link.invalid.prefix"] = self.linkInvalidPrefix?.encodeToJSON()
        nillableDictionary["link.invalid.remove"] = self.linkInvalidRemove?.encodeToJSON()
        nillableDictionary["link.invalid.suffix"] = self.linkInvalidSuffix?.encodeToJSON()
        nillableDictionary["link.predated.prefix"] = self.linkPredatedPrefix?.encodeToJSON()
        nillableDictionary["link.predated.remove"] = self.linkPredatedRemove?.encodeToJSON()
        nillableDictionary["link.predated.suffix"] = self.linkPredatedSuffix?.encodeToJSON()
        nillableDictionary["link.wcmmodes"] = self.linkWcmmodes?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
