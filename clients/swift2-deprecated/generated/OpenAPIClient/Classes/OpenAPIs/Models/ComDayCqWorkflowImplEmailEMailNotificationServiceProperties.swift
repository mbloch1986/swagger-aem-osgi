//
// ComDayCqWorkflowImplEmailEMailNotificationServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWorkflowImplEmailEMailNotificationServiceProperties: JSONEncodable {
    public var fromAddress: ConfigNodePropertyString?
    public var hostPrefix: ConfigNodePropertyString?
    public var notifyOnabort: ConfigNodePropertyBoolean?
    public var notifyOncomplete: ConfigNodePropertyBoolean?
    public var notifyOncontainercomplete: ConfigNodePropertyBoolean?
    public var notifyUseronly: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["from.address"] = self.fromAddress?.encodeToJSON()
        nillableDictionary["host.prefix"] = self.hostPrefix?.encodeToJSON()
        nillableDictionary["notify.onabort"] = self.notifyOnabort?.encodeToJSON()
        nillableDictionary["notify.oncomplete"] = self.notifyOncomplete?.encodeToJSON()
        nillableDictionary["notify.oncontainercomplete"] = self.notifyOncontainercomplete?.encodeToJSON()
        nillableDictionary["notify.useronly"] = self.notifyUseronly?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
