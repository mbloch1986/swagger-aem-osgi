package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo._

case class ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties])

object ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfoCodecJson: CodecJson[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo] = CodecJson.derive[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo]
  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfoDecoder: EntityDecoder[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo] = jsonOf[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo]
  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfoEncoder: EntityEncoder[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo] = jsonEncoderOf[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo]
}