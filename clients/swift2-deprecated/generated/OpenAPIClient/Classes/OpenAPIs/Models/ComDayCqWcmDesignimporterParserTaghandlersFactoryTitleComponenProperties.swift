//
// ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenProperties: JSONEncodable {
    public var serviceRanking: ConfigNodePropertyInteger?
    public var tagpattern: ConfigNodePropertyString?
    public var componentResourceType: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["tagpattern"] = self.tagpattern?.encodeToJSON()
        nillableDictionary["component.resourceType"] = self.componentResourceType?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
