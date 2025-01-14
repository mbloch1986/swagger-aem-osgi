//
// ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties: Codable {

    public var schedulerPeriod: ConfigNodePropertyInteger?
    public var schedulerConcurrent: ConfigNodePropertyBoolean?
    public var goodLinkTestInterval: ConfigNodePropertyInteger?
    public var badLinkTestInterval: ConfigNodePropertyInteger?
    public var linkUnusedInterval: ConfigNodePropertyInteger?
    public var connectionTimeout: ConfigNodePropertyInteger?

    public init(schedulerPeriod: ConfigNodePropertyInteger?, schedulerConcurrent: ConfigNodePropertyBoolean?, goodLinkTestInterval: ConfigNodePropertyInteger?, badLinkTestInterval: ConfigNodePropertyInteger?, linkUnusedInterval: ConfigNodePropertyInteger?, connectionTimeout: ConfigNodePropertyInteger?) {
        self.schedulerPeriod = schedulerPeriod
        self.schedulerConcurrent = schedulerConcurrent
        self.goodLinkTestInterval = goodLinkTestInterval
        self.badLinkTestInterval = badLinkTestInterval
        self.linkUnusedInterval = linkUnusedInterval
        self.connectionTimeout = connectionTimeout
    }

    public enum CodingKeys: String, CodingKey { 
        case schedulerPeriod = "scheduler.period"
        case schedulerConcurrent = "scheduler.concurrent"
        case goodLinkTestInterval = "good_link_test_interval"
        case badLinkTestInterval = "bad_link_test_interval"
        case linkUnusedInterval = "link_unused_interval"
        case connectionTimeout = "connection.timeout"
    }


}

