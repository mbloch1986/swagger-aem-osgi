//
// ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties: Codable {

    public var cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled: ConfigNodePropertyBoolean?

    public init(cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled: ConfigNodePropertyBoolean?) {
        self.cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled = cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled
    }

    public enum CodingKeys: String, CodingKey { 
        case cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled = "cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled"
    }


}
