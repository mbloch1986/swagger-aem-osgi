//
// ComDayCqDamCoreImplDamEventPurgeServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreImplDamEventPurgeServiceProperties: JSONEncodable {

    public var schedulerExpression: ConfigNodePropertyString?
    public var maxSavedActivities: ConfigNodePropertyInteger?
    public var saveInterval: ConfigNodePropertyInteger?
    public var enableActivityPurge: ConfigNodePropertyBoolean?
    public var eventTypes: ConfigNodePropertyDropDown?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["maxSavedActivities"] = self.maxSavedActivities?.encodeToJSON()
        nillableDictionary["saveInterval"] = self.saveInterval?.encodeToJSON()
        nillableDictionary["enableActivityPurge"] = self.enableActivityPurge?.encodeToJSON()
        nillableDictionary["eventTypes"] = self.eventTypes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
