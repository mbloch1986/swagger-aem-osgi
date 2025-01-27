//
// ComDayCrxSecurityTokenImplTokenCleanupTaskProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCrxSecurityTokenImplTokenCleanupTaskProperties: JSONEncodable {
    public var enableTokenCleanupTask: ConfigNodePropertyBoolean?
    public var schedulerExpression: ConfigNodePropertyString?
    public var batchSize: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["enable.token.cleanup.task"] = self.enableTokenCleanupTask?.encodeToJSON()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["batch.size"] = self.batchSize?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
