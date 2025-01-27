//
// ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceProperties: JSONEncodable {
    public var archivingEnabled: ConfigNodePropertyBoolean?
    public var schedulerExpression: ConfigNodePropertyString?
    public var archiveSinceDaysCompleted: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["archiving.enabled"] = self.archivingEnabled?.encodeToJSON()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["archive.since.days.completed"] = self.archiveSinceDaysCompleted?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
