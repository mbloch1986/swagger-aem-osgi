//
// ComDayCqDamCoreImplExpiryNotificationJobImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplExpiryNotificationJobImplProperties: Codable {

    public var cqDamExpiryNotificationSchedulerIstimebased: ConfigNodePropertyBoolean?
    public var cqDamExpiryNotificationSchedulerTimebasedRule: ConfigNodePropertyString?
    public var cqDamExpiryNotificationSchedulerPeriodRule: ConfigNodePropertyInteger?
    public var sendEmail: ConfigNodePropertyBoolean?
    public var assetExpiredLimit: ConfigNodePropertyInteger?
    public var priorNotificationSeconds: ConfigNodePropertyInteger?
    public var cqDamExpiryNotificationUrlProtocol: ConfigNodePropertyString?

    public init(cqDamExpiryNotificationSchedulerIstimebased: ConfigNodePropertyBoolean?, cqDamExpiryNotificationSchedulerTimebasedRule: ConfigNodePropertyString?, cqDamExpiryNotificationSchedulerPeriodRule: ConfigNodePropertyInteger?, sendEmail: ConfigNodePropertyBoolean?, assetExpiredLimit: ConfigNodePropertyInteger?, priorNotificationSeconds: ConfigNodePropertyInteger?, cqDamExpiryNotificationUrlProtocol: ConfigNodePropertyString?) {
        self.cqDamExpiryNotificationSchedulerIstimebased = cqDamExpiryNotificationSchedulerIstimebased
        self.cqDamExpiryNotificationSchedulerTimebasedRule = cqDamExpiryNotificationSchedulerTimebasedRule
        self.cqDamExpiryNotificationSchedulerPeriodRule = cqDamExpiryNotificationSchedulerPeriodRule
        self.sendEmail = sendEmail
        self.assetExpiredLimit = assetExpiredLimit
        self.priorNotificationSeconds = priorNotificationSeconds
        self.cqDamExpiryNotificationUrlProtocol = cqDamExpiryNotificationUrlProtocol
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamExpiryNotificationSchedulerIstimebased = "cq.dam.expiry.notification.scheduler.istimebased"
        case cqDamExpiryNotificationSchedulerTimebasedRule = "cq.dam.expiry.notification.scheduler.timebased.rule"
        case cqDamExpiryNotificationSchedulerPeriodRule = "cq.dam.expiry.notification.scheduler.period.rule"
        case sendEmail = "send_email"
        case assetExpiredLimit = "asset_expired_limit"
        case priorNotificationSeconds = "prior_notification_seconds"
        case cqDamExpiryNotificationUrlProtocol = "cq.dam.expiry.notification.url.protocol"
    }


}
