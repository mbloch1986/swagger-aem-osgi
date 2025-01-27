//
// ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties: Codable {

    public var patternTime: ConfigNodePropertyString?
    public var patternNewline: ConfigNodePropertyString?
    public var patternDayOfMonth: ConfigNodePropertyString?
    public var patternMonth: ConfigNodePropertyString?
    public var patternYear: ConfigNodePropertyString?
    public var patternDate: ConfigNodePropertyString?
    public var patternDateTime: ConfigNodePropertyString?
    public var patternEmail: ConfigNodePropertyString?

    public init(patternTime: ConfigNodePropertyString?, patternNewline: ConfigNodePropertyString?, patternDayOfMonth: ConfigNodePropertyString?, patternMonth: ConfigNodePropertyString?, patternYear: ConfigNodePropertyString?, patternDate: ConfigNodePropertyString?, patternDateTime: ConfigNodePropertyString?, patternEmail: ConfigNodePropertyString?) {
        self.patternTime = patternTime
        self.patternNewline = patternNewline
        self.patternDayOfMonth = patternDayOfMonth
        self.patternMonth = patternMonth
        self.patternYear = patternYear
        self.patternDate = patternDate
        self.patternDateTime = patternDateTime
        self.patternEmail = patternEmail
    }

    public enum CodingKeys: String, CodingKey { 
        case patternTime = "pattern.time"
        case patternNewline = "pattern.newline"
        case patternDayOfMonth = "pattern.dayOfMonth"
        case patternMonth = "pattern.month"
        case patternYear = "pattern.year"
        case patternDate = "pattern.date"
        case patternDateTime = "pattern.dateTime"
        case patternEmail = "pattern.email"
    }


}

