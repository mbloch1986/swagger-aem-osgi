//
// ComDayCqDamCoreImplExpiryNotificationJobImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplExpiryNotificationJobImplProperties: JSONEncodable {
    public var cqDamExpiryNotificationSchedulerIstimebased: ConfigNodePropertyBoolean?
    public var cqDamExpiryNotificationSchedulerTimebasedRule: ConfigNodePropertyString?
    public var cqDamExpiryNotificationSchedulerPeriodRule: ConfigNodePropertyInteger?
    public var sendEmail: ConfigNodePropertyBoolean?
    public var assetExpiredLimit: ConfigNodePropertyInteger?
    public var priorNotificationSeconds: ConfigNodePropertyInteger?
    public var cqDamExpiryNotificationUrlProtocol: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.expiry.notification.scheduler.istimebased"] = self.cqDamExpiryNotificationSchedulerIstimebased?.encodeToJSON()
        nillableDictionary["cq.dam.expiry.notification.scheduler.timebased.rule"] = self.cqDamExpiryNotificationSchedulerTimebasedRule?.encodeToJSON()
        nillableDictionary["cq.dam.expiry.notification.scheduler.period.rule"] = self.cqDamExpiryNotificationSchedulerPeriodRule?.encodeToJSON()
        nillableDictionary["send_email"] = self.sendEmail?.encodeToJSON()
        nillableDictionary["asset_expired_limit"] = self.assetExpiredLimit?.encodeToJSON()
        nillableDictionary["prior_notification_seconds"] = self.priorNotificationSeconds?.encodeToJSON()
        nillableDictionary["cq.dam.expiry.notification.url.protocol"] = self.cqDamExpiryNotificationUrlProtocol?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}