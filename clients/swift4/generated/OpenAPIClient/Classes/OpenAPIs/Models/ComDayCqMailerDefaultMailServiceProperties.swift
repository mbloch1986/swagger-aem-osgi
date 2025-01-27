//
// ComDayCqMailerDefaultMailServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqMailerDefaultMailServiceProperties: Codable {

    public var smtpHost: ConfigNodePropertyString?
    public var smtpPort: ConfigNodePropertyInteger?
    public var smtpUser: ConfigNodePropertyString?
    public var smtpPassword: ConfigNodePropertyString?
    public var fromAddress: ConfigNodePropertyString?
    public var smtpSsl: ConfigNodePropertyBoolean?
    public var smtpStarttls: ConfigNodePropertyBoolean?
    public var debugEmail: ConfigNodePropertyBoolean?

    public init(smtpHost: ConfigNodePropertyString?, smtpPort: ConfigNodePropertyInteger?, smtpUser: ConfigNodePropertyString?, smtpPassword: ConfigNodePropertyString?, fromAddress: ConfigNodePropertyString?, smtpSsl: ConfigNodePropertyBoolean?, smtpStarttls: ConfigNodePropertyBoolean?, debugEmail: ConfigNodePropertyBoolean?) {
        self.smtpHost = smtpHost
        self.smtpPort = smtpPort
        self.smtpUser = smtpUser
        self.smtpPassword = smtpPassword
        self.fromAddress = fromAddress
        self.smtpSsl = smtpSsl
        self.smtpStarttls = smtpStarttls
        self.debugEmail = debugEmail
    }

    public enum CodingKeys: String, CodingKey { 
        case smtpHost = "smtp.host"
        case smtpPort = "smtp.port"
        case smtpUser = "smtp.user"
        case smtpPassword = "smtp.password"
        case fromAddress = "from.address"
        case smtpSsl = "smtp.ssl"
        case smtpStarttls = "smtp.starttls"
        case debugEmail = "debug.email"
    }


}

