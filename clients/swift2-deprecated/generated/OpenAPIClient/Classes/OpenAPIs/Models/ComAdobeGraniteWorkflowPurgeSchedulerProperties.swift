//
// ComAdobeGraniteWorkflowPurgeSchedulerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteWorkflowPurgeSchedulerProperties: JSONEncodable {
    public var scheduledpurgeName: ConfigNodePropertyString?
    public var scheduledpurgeWorkflowStatus: ConfigNodePropertyDropDown?
    public var scheduledpurgeModelIds: ConfigNodePropertyArray?
    public var scheduledpurgeDaysold: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["scheduledpurge.name"] = self.scheduledpurgeName?.encodeToJSON()
        nillableDictionary["scheduledpurge.workflowStatus"] = self.scheduledpurgeWorkflowStatus?.encodeToJSON()
        nillableDictionary["scheduledpurge.modelIds"] = self.scheduledpurgeModelIds?.encodeToJSON()
        nillableDictionary["scheduledpurge.daysold"] = self.scheduledpurgeDaysold?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
