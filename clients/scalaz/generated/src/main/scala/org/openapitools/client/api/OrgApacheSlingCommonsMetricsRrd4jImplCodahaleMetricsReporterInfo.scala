package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo._

case class OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfoCodecJson: CodecJson[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo] = CodecJson.derive[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo]
  implicit val OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfoDecoder: EntityDecoder[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo] = jsonOf[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo]
  implicit val OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfoEncoder: EntityEncoder[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo] = jsonEncoderOf[OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterInfo]
}