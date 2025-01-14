//
// ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties: Codable {

    public var cqDamWebdavVersionLinkingEnable: ConfigNodePropertyBoolean?
    public var cqDamWebdavVersionLinkingSchedulerPeriod: ConfigNodePropertyInteger?
    public var cqDamWebdavVersionLinkingStagingTimeout: ConfigNodePropertyInteger?

    public init(cqDamWebdavVersionLinkingEnable: ConfigNodePropertyBoolean?, cqDamWebdavVersionLinkingSchedulerPeriod: ConfigNodePropertyInteger?, cqDamWebdavVersionLinkingStagingTimeout: ConfigNodePropertyInteger?) {
        self.cqDamWebdavVersionLinkingEnable = cqDamWebdavVersionLinkingEnable
        self.cqDamWebdavVersionLinkingSchedulerPeriod = cqDamWebdavVersionLinkingSchedulerPeriod
        self.cqDamWebdavVersionLinkingStagingTimeout = cqDamWebdavVersionLinkingStagingTimeout
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamWebdavVersionLinkingEnable = "cq.dam.webdav.version.linking.enable"
        case cqDamWebdavVersionLinkingSchedulerPeriod = "cq.dam.webdav.version.linking.scheduler.period"
        case cqDamWebdavVersionLinkingStagingTimeout = "cq.dam.webdav.version.linking.staging.timeout"
    }


}

