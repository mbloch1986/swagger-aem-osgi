# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingModelsImplModelAdapterFactoryProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"osgi.http.whiteboard.listener",
    :"osgi.http.whiteboard.context.select",
    :"max.recursion.depth",
    :"cleanup.job.period"
  ]

  @type t :: %__MODULE__{
    :"osgi.http.whiteboard.listener" => ConfigNodePropertyString,
    :"osgi.http.whiteboard.context.select" => ConfigNodePropertyString,
    :"max.recursion.depth" => ConfigNodePropertyInteger,
    :"cleanup.job.period" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingModelsImplModelAdapterFactoryProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"osgi.http.whiteboard.listener", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"osgi.http.whiteboard.context.select", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"max.recursion.depth", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"cleanup.job.period", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

