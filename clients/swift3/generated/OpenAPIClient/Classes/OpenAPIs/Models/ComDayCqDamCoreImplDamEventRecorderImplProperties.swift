//
// ComDayCqDamCoreImplDamEventRecorderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreImplDamEventRecorderImplProperties: JSONEncodable {

    public var eventFilter: ConfigNodePropertyString?
    public var eventQueueLength: ConfigNodePropertyInteger?
    public var eventrecorderEnabled: ConfigNodePropertyBoolean?
    public var eventrecorderBlacklist: ConfigNodePropertyArray?
    public var eventrecorderEventtypes: ConfigNodePropertyDropDown?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["event.filter"] = self.eventFilter?.encodeToJSON()
        nillableDictionary["event.queue.length"] = self.eventQueueLength?.encodeToJSON()
        nillableDictionary["eventrecorder.enabled"] = self.eventrecorderEnabled?.encodeToJSON()
        nillableDictionary["eventrecorder.blacklist"] = self.eventrecorderBlacklist?.encodeToJSON()
        nillableDictionary["eventrecorder.eventtypes"] = self.eventrecorderEventtypes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

